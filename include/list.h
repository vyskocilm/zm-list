/*  =========================================================================
    list - zm list actor

    Copyright (c) the Contributors as noted in the AUTHORS file.  This file is part
    of zmon.it, the fast and scalable monitoring system.                           
                                                                                   
    This Source Code Form is subject to the terms of the Mozilla Public License, v.
    2.0. If a copy of the MPL was not distributed with this file, You can obtain   
    one at http://mozilla.org/MPL/2.0/.                                            
    =========================================================================
*/

#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif


//  @interface
//  Create new list actor instance.
//  @TODO: Describe the purpose of this actor!
//
//      zactor_t *list = zactor_new (list, NULL);
//
//  Destroy list instance.
//
//      zactor_destroy (&list);
//
//  ----------------------------------------------------------------------------
//  Enable verbose logging of commands and activity:
//
//      zstr_send (list, "VERBOSE");
//
//  ----------------------------------------------------------------------------
//  Start list actor.
//
//      zstr_sendx (list, "START", NULL);
//
//  ----------------------------------------------------------------------------
//  Stop list actor.
//
//      zstr_sendx (list, "STOP", NULL);
//
//  ----------------------------------------------------------------------------
//  Set malamute connection information.
//
//      zstr_sendx (weather, "CONNECTION", "<endpoint>", "<client name>", NULL);
//
//  ----------------------------------------------------------------------------
//  Add 'stream' to list of consumed streams.
//
//      zstr_sendx (weather, "CONSUMER", "<stream>", NULL);
//
//  ----------------------------------------------------------------------------
//  Set publish stream.
//
//      zstr_sendx (weather, "PRODUCER", "<stream>", NULL);
//



//  This is the list constructor as a zactor_fn;
ZM_DEVICE_EXPORT void
    list_actor (zsock_t *pipe, void *args);

//  Self test of this actor
ZM_DEVICE_EXPORT void
    list_test (bool verbose);
//  @end

#ifdef __cplusplus
}
#endif

#endif
