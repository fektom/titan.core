/******************************************************************************
 * Copyright (c) 2000-2018 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v2.0
 * which accompanies this distribution, and is available at
 * https://www.eclipse.org/org/documents/epl-2.0/EPL-2.0.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Forstner, Matyas
 *   Lovassy, Arpad
 *   Raduly, Csaba
 *   Szabo, Janos Zoltan – initial implementation
 *
 ******************************************************************************/
// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version 1.2.pl2
// for Matyas Forstner (tmpmfr@saussure) on Thu Oct 17 16:56:18 2002


// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "MyPort2.hh"

#ifndef OLD_NAMES
namespace Regr {
#endif

MyPort2::MyPort2(const char *par_port_name)
	: MyPort2_BASE(par_port_name)
{

}

MyPort2::~MyPort2()
{

}

void MyPort2::set_parameter(const char *parameter_name,
	const char *parameter_value)
{

}

void MyPort2::Event_Handler(const fd_set *read_fds,
	const fd_set *write_fds, const fd_set *error_fds,
	double time_since_last_call)
{

}

void MyPort2::user_map(const char *system_port)
{

}

void MyPort2::user_unmap(const char *system_port)
{

}

void MyPort2::user_start()
{

}

void MyPort2::user_stop()
{

}

#ifndef OLD_NAMES

#define DECODER_MACRO(module, type) \
{ \
  module::type pdu; \
  TTCN_EncDec::clear_error(); \
  buf.rewind(); \
  pdu.decode(module::type##_descr_, buf, TTCN_EncDec::CT_BER, BER_ACCEPT_ALL); \
  if(TTCN_EncDec::get_last_error_type() == TTCN_EncDec::ET_NONE) { \
    incoming_message(pdu); \
    return; \
  } \
}

#else

#define DECODER_MACRO(module, type) \
{ \
  type pdu; \
  TTCN_EncDec::clear_error(); \
  buf.rewind(); \
  pdu.decode(type##_descr_, buf, TTCN_EncDec::CT_BER, BER_ACCEPT_ALL); \
  if(TTCN_EncDec::get_last_error_type() == TTCN_EncDec::ET_NONE) { \
    incoming_message(pdu); \
    return; \
  } \
}

#endif

void MyPort2::outgoing_send(const OCTETSTRING& send_par)
{
  TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_ALL,
                                  TTCN_EncDec::EB_WARNING);
  TTCN_Buffer buf(send_par);

  DECODER_MACRO(Regr1, T0)
  DECODER_MACRO(Regr1, T2)
  DECODER_MACRO(Regr1, T3)
  DECODER_MACRO(Regr1, T4)
  DECODER_MACRO(Regr1, T5)
  DECODER_MACRO(Regr1, T6)
  DECODER_MACRO(Regr1, T7)
  DECODER_MACRO(Regr1, T8)
  DECODER_MACRO(Regr2, T10)
  DECODER_MACRO(Regr2, T11)
}

#ifndef OLD_NAMES
} /* end of namespace */
#endif
