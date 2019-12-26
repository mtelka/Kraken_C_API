#ifndef __kr_private_funding_functions_h
#define __kr_private_funding_functions_h

//#include <stdarg.h>
//#include <stdint.h>
#include "kraken_api.h"
//#include "logging.h"
//#include "url.h"
#include "curl.h"
//#include "kr_helper.h"

/*!
 * \file kr_private_funding_functions.h
 * \brief Contains private user funding functions.
 *
 * The file inherits the functions referring to
 * <a href=https://www.kraken.com/features/api#private-user-funding>Kraken API: Private user funding</a>.
 */

/*!
 * \brief Get deposit methods.
 * \param **kr_api Initialized API structure.
 * \param asset Asset being deposited
 *
 * Optionals: <b>aclass</b>
 *
 * Result: Array of deposit methods.
 *
 * */
int deposit_methods(struct kraken_api **kr_api, const char *asset);

#endif
