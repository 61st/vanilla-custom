#define LOADING_SCREEN_CLASS(className,authorName) \
    class className { \
        author = QUOTE(authorName); \
        path = QPATHTOF(ui\##className##.paa); \
        class Noise { \
            text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa"; \
        }; \
    }

class GVAR(CfgLoadingScreen) {
    class Backgrounds {
        LOADING_SCREEN_CLASS(clearingoutHD,CURY);
        LOADING_SCREEN_CLASS(debriefHD,CURY);
        LOADING_SCREEN_CLASS(firefightHD,CURY);
        LOADING_SCREEN_CLASS(HALOHD,CURY);
        LOADING_SCREEN_CLASS(IgotyouHD,CURY);
        LOADING_SCREEN_CLASS(mainroad,CURY);
        LOADING_SCREEN_CLASS(nightflightHD,CURY);
        LOADING_SCREEN_CLASS(planepose,CURY);
        LOADING_SCREEN_CLASS(recoveryHD,CURY);
        LOADING_SCREEN_CLASS(stackupHD,CURY);
        LOADING_SCREEN_CLASS(WardaddyHD,CURY);
        LOADING_SCREEN_CLASS(airassaultHD,CURY);
        LOADING_SCREEN_CLASS(stageblackh,MORRIS);
        LOADING_SCREEN_CLASS(seachnok,CURY);
        LOADING_SCREEN_CLASS(cebu_end,61st);
    };
};

