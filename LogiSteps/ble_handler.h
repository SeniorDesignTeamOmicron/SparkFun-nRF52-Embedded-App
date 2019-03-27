#ifndef BLE_HANDLER_H__
#define BLE_HANDLER_H__
#include "ble.h"
#include "ble_advdata.h"
#include "ble_advertising.h"
#include "ble_conn_params.h"
#include "nrf_sdh_soc.h"
#include "nrf_sdh_ble.h"
#include "app_timer.h"
#include "fds.h"
#include "peer_manager.h"
#include "nrf_ble_gatt.h"
#include "nrf_ble_qwr.h"
#include "peer_manager.h"
#include "peer_manager_handler.h"

#include "nrf_log.h"

// Define 128-bit base UUID
#define BLE_UUID_OUR_BASE_UUID                    {{0x23, 0xD1, 0x13, 0xEF, 0x5F, 0x78, 0x23, 0x15, 0xDE, 0xEF, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00}}
// Define 16-bit service UUID
#define BLE_UUID_OUR_SERVICE_UUID                 0x0000 
// Define 16-bit characteristic UUIDS
#define BLE_UUID_DATA_CHARACTERISTIC_UUID         0x1111
#define BLE_UUID_TIME_CHARACTERISTIC_UUID         0x2222 

/**@brief Function for starting advertising.
 *
 * @param[in] erase_bonds Boolean on whether or not to erase the devices bonds
 */
void advertising_start();


/**@brief Function for handling Peer Manager events.
 *
 * @param[in] p_evt  Peer Manager event.
 */
void pm_evt_handler(pm_evt_t const * p_evt);


/**@brief Function for the GAP initialization.
 *
 * @details This function sets up all the necessary GAP (Generic Access Profile) parameters of the
 *          device including the device name, appearance, and the preferred connection parameters.
 */
void gap_params_init(void);


/**@brief Function for initializing the GATT module.
 */
void gatt_init(void);


/**@brief Function for handling Queued Write Module errors.
 *
 * @details A pointer to this function will be passed to each service which may need to inform the
 *          application about an error.
 *
 * @param[in]   nrf_error   Error code containing information about what went wrong.
 */
void nrf_qwr_error_handler(uint32_t nrf_error);



/**@brief Function for initializing services that will be used by the application.
 */
void services_init(void);


/**@brief Function for handling the Connection Parameters Module.
 *
 * @details This function will be called for all events in the Connection Parameters Module which
 *          are passed to the application.
 *          @note All this function does is to disconnect. This could have been done by simply
 *                setting the disconnect_on_fail config parameter, but instead we use the event
 *                handler mechanism to demonstrate its use.
 *
 * @param[in] p_evt  Event received from the Connection Parameters Module.
 */
void on_conn_params_evt(ble_conn_params_evt_t * p_evt);


/**@brief Function for handling a Connection Parameters error.
 *
 * @param[in] nrf_error  Error code containing information about what went wrong.
 */
void conn_params_error_handler(uint32_t nrf_error);


/**@brief Function for initializing the Connection Parameters module.
 */
void conn_params_init(void);


/**@brief Function for handling advertising events.
 *
 * @details This function will be called for advertising events which are passed to the application.
 *
 * @param[in] ble_adv_evt  Advertising event.
 */
void on_adv_evt(ble_adv_evt_t ble_adv_evt);


/**@brief Function for handling BLE events.
 *
 * @param[in]   p_ble_evt   Bluetooth stack event.
 * @param[in]   p_context   Unused.
 */
void ble_evt_handler(ble_evt_t const * p_ble_evt, void * p_context);


/**@brief Function for initializing the BLE stack.
 *
 * @details Initializes the SoftDevice and the BLE event interrupt.
 */
void ble_stack_init(void);


/**@brief Function for the Peer Manager initialization.
 */
void peer_manager_init(void);


/**@brief Clear bond information from persistent storage.
 */
void delete_bonds(void);


/**@brief Function for initializing the Advertising functionality.
 */
void advertising_init(void);



//Below is all stuff for our service specifically

// This structure contains various status information for our service. 
// The name is based on the naming convention used in Nordics SDKs. 
// 'ble’ indicates that it is a Bluetooth Low Energy relevant structure and 
// ‘os’ is short for our service. 
typedef struct {
    // Handle for current connection (provided by BLE stack)
    uint16_t                    conn_handle;    
    // Handle for the service (provided by BLE stack)
    uint16_t                    service_handle; 
    // Handles for the characteristics of our service
    ble_gatts_char_handles_t    data_handle;
    ble_gatts_char_handles_t    time_handle;
}ble_os_t;



/**@brief Function for handling BLE Stack events related to our service and characteristic.
 *
 * @details Handles all events from the BLE stack of interest to Our Service.
 *
 * @param[in]   p_our_service       Our Service structure.
 * @param[in]   p_ble_evt           Event received from the BLE stack.
 */
void ble_our_service_on_ble_evt(ble_evt_t const* p_ble_evt, void* p_context);


/**@brief Function for initializing our new service.
 *
 * @param[in]   p_our_service       Pointer to Our Service structure.
 */
void our_service_init(ble_os_t* p_our_service);


/**@brief Function for adding new characterstic to our service
 *
 * @param[in]   p_our_service        Our Service structure.
 * @param[in]   myUUID               The UUID of characteristic to add
 * @param[in]   maxLen               The max length, in bytes, of the characteristics data
 * @param[in]   initData             The inital data of the characteristic
 * @param[in]   charHandle           The handle of the characteristic to add
 */
void our_characteristic_add(ble_os_t* p_our_service, uint16_t my_UUID, uint16_t maxLen, uint8_t init_data[], ble_gatts_char_handles_t* char_handle);


/**@brief Function for updating and sending new characteristic values
 *
 * @details The application calls this function whenever our timer_timeout_handler triggers
 *
 * @param[in]   p_our_service            Our Service structure.
 * @param[in]   length                   The length, in bytes, of the new characteristic value 
 * @param[in]   characteristic_value     New characteristic value.
 * @param[in]   char_handle              The handle of the characteristic being updated
 */
void our_characteristic_update(ble_os_t* p_our_service, uint16_t length, int32_t *char_value, ble_gatts_char_handles_t char_handle);

#endif  /* _ OUR_BLE_H__ */
