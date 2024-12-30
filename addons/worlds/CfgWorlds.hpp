
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
    class Enoch : CAWorld {
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
    class Malden : CAWorld {
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
    class Stratis : CAWorld {
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
    class Tanoa : CAWorld {
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
    // class dagger_island_summer_no_targets: CAWorld {
    //     class Grid : Grid {
    //         class Zoom1 {
    //             zoomMax=0.005;
    //             format="X Y";
    //             formatX="0000";
    //             formatY="0000";
    //             stepX=10;
    //             stepY=-10;
    //         };
    //         class Zoom2 {
    //             zoomMax=0.05;
    //             format="X Y";
    //             formatX="000";
    //             formatY="000";
    //             stepX=100;
    //             stepY=-100;
    //         };
    //         class Zoom3 {
    //             zoomMax=1;
    //             format="X Y";
    //             formatX="00";
    //             formatY="00";
    //             stepX=1000;
    //             stepY=-1000;
    //         };
    //     };
    //     pictureMap = "";
    // };
};