/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\lxim_common\functions\diagnostics\fn_isDebug.sqf
 *	by YonV
 *
 *	check if debug is enabled
 *
 *	Arguments:
 *	nothing
 *
 *	Return:
 *	<BOOLEAN>
 *
 *	Example:
 *	[] call lxim_common_fnc_isDebug;
 *
 */

// -------------------------------------------------------------------------------------------------

private _return = (missionNamespace getVariable ["lxim_debug_enabled", false]);

_return;
