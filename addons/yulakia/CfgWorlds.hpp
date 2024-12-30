
/*
 * Author: AUTHOR
 * Function description
 *
 * Arguments:
 * 0: Objects <ARRAY>
 * 1: All <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[bob, ted], false] call lxim_main_fnc_example
 *
 * Public: No
 */

class CfgWorlds {
    class DefaultWorld;
    class CAWorld : DefaultWorld {
        class Grid {
        };
    };
    class yulakia : CAWorld {
        class Grid : Grid {
            class Zoom1 {
                zoomMax=0.005;
                format="X Y";
                formatX="0000";
                formatY="0000";
                stepX=10;
                stepY=-10;
            };
            class Zoom2 {
                zoomMax=0.05;
                format="X Y";
                formatX="000";
                formatY="000";
                stepX=100;
                stepY=-100;
            };
            class Zoom3 {
                zoomMax=1;
                format="X Y";
                formatX="00";
                formatY="00";
                stepX=1000;
                stepY=-1000;
            };
        };
    };
};