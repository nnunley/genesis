/*
// ColdMUD was created and is copyright 1993, 1994 by Greg Hudson
//
// Genesis is a derivitive work, and is copyright 1995 by Brandon Gillespie.
// Full details and copyright information can be found in the file doc/CREDITS
//
// File: include/operators.h
// ---
// Operator declarations.
*/

#ifndef _operator_h_
#define _operator_h_

void op_comment(void);
void op_pop(void);
void op_set_local(void);
void op_set_obj_var(void);
void op_if(void);
void op_else(void);
void op_for_range(void);
void op_for_list(void);
void op_while(void);
void op_switch(void);
void op_case_value(void);
void op_case_range(void);
void op_last_case_value(void);
void op_last_case_range(void);
void op_end_case(void);
void op_default(void);
void op_end(void);
void op_break(void);
void op_continue(void);
void op_return(void);
void op_return_expr(void);
void op_catch(void);
void op_catch_end(void);
void op_handler_end(void);
void op_zero(void);
void op_one(void);
void op_integer(void);
void op_float(void);
void op_string(void);
void op_objnum(void);
void op_symbol(void);
void op_error(void);
void op_objname(void);
void op_get_local(void);
void op_get_obj_var(void);
void op_start_args(void);
void op_pass(void);
void op_message(void);
void op_expr_message(void);
void op_list(void);
void op_dict(void);
void op_buffer(void);
void op_frob(void);
void op_index(void);
void op_and(void);
void op_or(void);
void op_splice(void);
void op_critical(void);
void op_critical_end(void);
void op_propagate(void);
void op_propagate_end(void);
void op_not(void);
void op_negate(void);
void op_multiply(void);
void op_doeq_multiply(void);
void op_divide(void);
void op_doeq_divide(void);
void op_modulo(void);
void op_add(void);
void op_doeq_add(void);
void op_splice_add(void);
void op_subtract(void);
void op_doeq_subtract(void);
void op_p_increment(void);
void op_p_decrement(void);
void op_increment(void);
void op_decrement(void);
void op_equal(void);
void op_not_equal(void);
void op_greater(void);
void op_greater_or_equal(void);
void op_less(void);
void op_less_or_equal(void);
void op_in(void);
void op_bwand(void);
void op_bwor(void);
void op_bwshr(void);
void op_bwshl(void);

#endif
