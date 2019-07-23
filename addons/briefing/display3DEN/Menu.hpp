class GVAR(Folder) {
    text = "Configure Briefings";
    items[] = {
        QGVAR(Notes_Configure),
        QGVAR(Export),
        QGVAR(Configure_Blufor),
        QGVAR(Configure_Opfor),
        QGVAR(Configure_Indfor),
        QGVAR(Configure_Civ)
    };
    picture = "\a3\3DEN\Data\Cfg3DEN\Comment\texture_ca.paa";
};

class GVAR(Configure_Blufor) {
    text = "Configure Blufor Briefing";
    action = QUOTE(edit3DENMissionAttributes QQGVAR(Blufor));
    picture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_west_ca.paa";
};

class GVAR(Configure_Opfor) {
    text = "Configure Opfor Briefing";
    action = QUOTE(edit3DENMissionAttributes QQGVAR(Opfor));
    picture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_east_ca.paa";
};

class GVAR(Configure_Indfor) {
    text = "Configure Indfor Briefing";
    action = QUOTE(edit3DENMissionAttributes QQGVAR(Indfor));
    picture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_guer_ca.paa";
};

class GVAR(Configure_Civ) {
    text = "Configure Civilian Briefing";
    action = QUOTE(edit3DENMissionAttributes QQGVAR(Civilian));
    picture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_civ_ca.paa";
};

class GVAR(Notes_Configure) {
    text = "Configure Mission Notes";
    action = QUOTE(edit3DENMissionAttributes QQGVAR(MissionNotes));
    picture = "\a3\modules_f\data\portraitModule_ca.paa";
};

class GVAR(Export) {
    text = "Export Briefing";
    action = QUOTE([] call EFUNC(Briefing,ExportBriefings););
    picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\moveFlying_ca.paa";
};
