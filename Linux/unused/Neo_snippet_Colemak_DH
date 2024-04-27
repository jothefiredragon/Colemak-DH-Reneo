//This is the 1st line of Linux\Neo_snippet_Colemak_DH.cpp which corresponds to the 307th line of Linux\de.cpp

xkb_symbols "neo_base" {

    // Levels in Neo jargon
    // --------------------------------------------------------------
    // Ebene 1: normal
    // Ebene 2: Shift
    // Ebene 3: Mod3
    // Ebene 4: Mod4 (for marking something use Shift + Mod4)
    // Ebene 5: Shift + Mod3
    // Ebene 6: Mod3 + Mod4
    // Compose (not a level): Mod3 + Tab
    // Feststelltaste (Capslock): Shift + Shift
    // Mod4-Lock: Mod4 + Mod4
    // Mod4-Lock: Shift + Mod3 + Tab

    // Legend
    // ===============
    // Levels in Xkbmap jargon to be found here in the definitions. 
    // These are the levels used, and Xorg's translations:
    // --------------------------------------------------------------
    // Xorg:       Level1                   Level2                   Level3                   Level4                   Level5                   Level6                   Level7                   Level8                   
    // Neo:        Ebene1                   Ebene2                   Ebene3                   Ebene5                   Ebene4                   Pseudo-Ebene             Ebene6                   ???                      
    // Keys (Neo): None                     Shift                    Mod3                     Mod3 + Shift             Mod4                     Mod4 + Shift             Mod3 + Mod4              Mod3 + Mod4 + Shift      


    // Alphanumeric-keys
    // ===============
    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";

    // Tab as Multi_key (Compose)
    // --------------------------------------------------------------
    key  <TAB> { [ Tab,                     ISO_Left_Tab,            U2302,                   ISO_Level5_Lock,         NoSymbol,                NoSymbol,                NoSymbol,                ISO_Level5_Lock          ] };


    // Number row
    // --------------------------------------------------------------
    key <TLDE> { [ dead_circumflex,         dead_caron,              dead_abovedot,           dead_belowdot,           dead_breve,              Pointer_EnableKeys,      U02DE,                   NoSymbol                 ] };

    key <AE01> { [ 1,                       degree,                  U2133,                   U2055,                   ordfeminine,             NoSymbol,                notsign,                 NoSymbol                 ] };
    key <AE02> { [ 2,                       section,                 twosuperior,             twosubscript,            masculine,               NoSymbol,                logicalor,               NoSymbol                 ] };
    key <AE03> { [ 3,                       sterling,                threesuperior,           threesubscript,          U2212,                   NoSymbol,                logicaland,              NoSymbol                 ] };
    key <AE04> { [ 4,                       guillemotright,          U203A,                   femalesymbol,            U2058,                   NoSymbol,                U22A5,                   NoSymbol                 ] };
    key <AE05> { [ 5,                       guillemotleft,           U2039,                   malesymbol,              U2059,                   NoSymbol,                U2221,                   NoSymbol                 ] };
    key <AE06> { [ 6,                       EuroSign,                U2104,                   U26A5,                   currency,                NoSymbol,                U2225,                   NoSymbol                 ] };

    key <AE07> { [ 7,                       notequal,                approxeq,                U03F0,                   U2685,                   NoSymbol,                identical,               NoSymbol                 ] };
    key <AE08> { [ 8,                       doublelowquotemark,      singlelowquotemark,      U27E8,                   U2684,                   ISO_Left_Tab,            U017F,                   NoSymbol                 ] };
    key <AE09> { [ 9,                       leftdoublequotemark,     leftsinglequotemark,     U27E9,                   U2683,                   KP_Divide,               U2610,                   NoSymbol                 ] };
    key <AE10> { [ 0,                       rightdoublequotemark,    rightsinglequotemark,    enfilledcircbullet,      KP_7,                    KP_Multiply,             emptyset,                NoSymbol                 ] };
    key <AE11> { [ grave,                   division,                dead_grave,              Greek_eta,               KP_8,                    KP_Subtract,             U2135,                   NoSymbol                 ] };
    key <AE12> { [ asciitilde,              multiply,                dead_tilde,              dead_dasia,              KP_9,                    NoSymbol,                dead_macron,             NoSymbol                 ] };

    // Top row
    // --------------------------------------------------------------
    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AD01> { [ q,                       Q,                       U232C,                   U03D5,                   Prior,                   Prior,                   U211A,                   NoSymbol                 ] };
    key <AD02> { [ w,                       W,                       plus,                    Greek_omega,             BackSpace,               BackSpace,               Greek_OMEGA,             NoSymbol                 ] };
    key <AD03> { [ f,                       F,                       bracketleft,             Greek_phi,               Up,                      Up,                      Greek_PHI,               NoSymbol                 ] };
    key <AD04> { [ p,                       P,                       Greek_pi,                U205B,                   Delete,                  Delete,                  Greek_PI,                NoSymbol                 ] };
    key <AD05> { [ b,                       B,                       bracketright,            Greek_beta,              Next,                    Next,                    Greek_GAMMA,             NoSymbol                 ] };
   
    key <AD06> { [ j,                       J,                       U300C,                   Greek_theta,             U2682,                   NoSymbol,                Greek_THETA,             NoSymbol                 ] };
    key <AD07> { [ l,                       L,                       U2113,                   Greek_lambda,            U2681,                   U2466,                   Greek_LAMBDA,            NoSymbol                 ] };
    key <AD08> { [ u,                       U,                       U300D,                   U205C,                   U2680,                   U2467,                   U2203,                   NoSymbol                 ] };
    key <AD09> { [ y,                       Y,                       asterisk,                Greek_upsilon,           KP_4,                    U2468,                   nabla,                   NoSymbol                 ] };
    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";
    key <AD10> { [ apostrophe,              quotedbl,                ampersand,               U03F5,                   KP_5,                    KP_Add,                  intersection,            NoSymbol                 ] };
    key <AD11> { [ minus,                   underscore,              asciicircum,             Greek_finalsmallsigma,   KP_6,                    NoSymbol,                jot,                     NoSymbol                 ] };
    key <AD12> { [ dead_abovering,          U21BB,                   ellipsis,                dead_psili,              U203B,                   NoSymbol,                dead_doubleacute,        NoSymbol                 ] };

    // Middle row
    // --------------------------------------------------------------
    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AC01> { [ a,                       A,                       U0D9E,                   Greek_alpha,             Home,                    Home,                    U2200,                   NoSymbol                 ] };
    key <AC02> { [ r,                       R,                       dead_acute,              Greek_rho,               Left,                    Left,                    U211D,                   NoSymbol                 ] };
    key <AC03> { [ s,                       S,                       braceleft,               Greek_sigma,             Down,                    Down,                    Greek_SIGMA,             NoSymbol                 ] };
    key <AC04> { [ t,                       T,                       braceright,              Greek_tau,               Right,                   Right,                   partialderivative,       NoSymbol                 ] };
    key <AC05> { [ g,                       G,                       U210A,                   Greek_gamma,             End,                     End,                     Greek_PSI,               NoSymbol                 ] };

    key <AC06> { [ m,                       M,                       dollar,                  Greek_mu,                U0E3F,                   NoSymbol,                U204A,                   NoSymbol                 ] };
    key <AC07> { [ n,                       N,                       parenleft,               Greek_nu,                U2318,                   U2463,                   U2115,                   NoSymbol                 ] };
    key <AC08> { [ e,                       E,                       parenright,              Greek_epsilon,           dead_diaeresis,          U2464,                   uparrow,                 NoSymbol                 ] };
    key <AC09> { [ i,                       I,                       colon,                   Greek_iota,              KP_1,                    U2465,                   integral,                NoSymbol                 ] };
    key <AC10> { [ o,                       O,                       semicolon,               Greek_omicron,           KP_2,                    U24EA,                   elementof,               NoSymbol                 ] };
    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";
    key <AC11> { [ Multi_key,               dead_cedilla,            percent,                 U205D,                   KP_3,                    KP_Decimal,              union,                   NoSymbol                 ] };

    // Bottom row
    // --------------------------------------------------------------
    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AB01> { [ x,                       X,                       U221C,                   Greek_xi,                Escape,                  Escape,                  Greek_XI,                NoSymbol                 ] };
    key <AB02> { [ c,                       C,                       U221B,                   Greek_chi,               includedin,              Tab,                     U2102,                   NoSymbol                 ] };
    key <AB03> { [ d,                       D,                       radical,                 Greek_delta,             Insert,                  Insert,                  Greek_DELTA,             NoSymbol                 ] };
    key <AB04> { [ v,                       V,                       backslash,               U205E,                   Return,                  Return,                  U2234,                   NoSymbol                 ] };
    key <AB05> { [ z,                       Z,                       bar,                     Greek_zeta,              U205A,                   Redo,                    U2124,                   NoSymbol                 ] };

    key <AB06> { [ k,                       K,                       numbersign,              Greek_kappa,             variation,               U2051,                   U2235,                   NoSymbol                 ] };
    key <AB07> { [ h,                       H,                       at,                      Greek_psi,               U221E,                   U2460,                   leftarrow,               NoSymbol                 ] };
    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";
    key <AB08> { [ comma,                   less,                    exclam,                  U03F1,                   U2755,                   U2461,                   downarrow,               NoSymbol                 ] };
    key <AB09> { [ period,                  greater,                 equal,                   U03D1,                   KP_0,                    U2462,                   rightarrow,              NoSymbol                 ] };
    key <AB10> { [ slash,                   question,                dead_stroke,             U2011,                   U2754,                   U21CC,                   U204F,                   NoSymbol                 ] };
    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";

    // Space key
    // --------------------------------------------------------------
    key <SPCE> { [ space,                   space,                   space,                   nobreakspace,            space,                   space,                   U202F,                   NoSymbol                 ] };


    // Keypad-keys 
    // ===============

    // The former Numlock key:
    key <NMLK> { [ Tab,                     ISO_Left_Tab,            U2042,                   U21A6,                   U2051,                   Pointer_EnableKeys,      U00AD,                   NoSymbol                 ] };

    // Topmost row
    // --------------------------------------------------------------
    key <KPDV> { [ KP_Divide,               KP_Divide,               U2215,                   U2300,                   U2044,                   NoSymbol,                U2223,                   NoSymbol                 ] };
    key <KPMU> { [ KP_Multiply,             KP_Multiply,             U22C5,                   U2299,                   periodcentered,          NoSymbol,                U2297,                   NoSymbol                 ] };
    key <KPSU> { [ KP_Subtract,             KP_Subtract,             U2212,                   U2296,                   U2216,                   NoSymbol,                U2238,                   NoSymbol                 ] };

    // Top row
    // --------------------------------------------------------------
    key  <KP7> { [ KP_7,                    U2714,                   U21D5,                   U226A,                   KP_Home,                 KP_Home,                 upstile,                 NoSymbol                 ] };
    key  <KP8> { [ KP_8,                    U2718,                   U21D1,                   intersection,            KP_Up,                   KP_Up,                   U22C2,                   NoSymbol                 ] };
    key  <KP9> { [ KP_9,                    dagger,                  U20D7,                   U226B,                   KP_Prior,                KP_Prior,                U2309,                   NoSymbol                 ] };
    key <KPAD> { [ KP_Add,                  KP_Add,                  plusminus,               U2295,                   U2213,                   NoSymbol,                U2214,                   NoSymbol                 ] };

    // Middle row
    // --------------------------------------------------------------
    key  <KP4> { [ KP_4,                    club,                    U21D0,                   includedin,              KP_Left,                 KP_Left,                 U2286,                   NoSymbol                 ] };
    key  <KP5> { [ KP_5,                    U2605,                   U204A,                   U22B6,                   KP_Begin,                KP_Begin,                U22B7,                   NoSymbol                 ] };
    key  <KP6> { [ KP_6,                    U2023,                   U21D2,                   includes,                KP_Right,                KP_Right,                U2287,                   NoSymbol                 ] };

    // Bottom row
    // --------------------------------------------------------------
    key  <KP1> { [ KP_1,                    diamond,                 ifonlyif,                lessthanequal,           KP_End,                  KP_End,                  downstile,               NoSymbol                 ] };
    key  <KP2> { [ KP_2,                    heart,                   U21D3,                   union,                   KP_Down,                 KP_Down,                 U22C3,                   NoSymbol                 ] };
    key  <KP3> { [ KP_3,                    U2660,                   U21CC,                   greaterthanequal,        KP_Next,                 KP_Next,                 U230B,                   NoSymbol                 ] };
    key <KPEN> { [ KP_Enter,                KP_Enter,                KP_Enter,                KP_Enter,                KP_Enter,                KP_Enter,                KP_Enter,                NoSymbol                 ] };
    key <KPEQ> { [ KP_Equal,                NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol,                NoSymbol                 ] };

    // Bottommost row
    // --------------------------------------------------------------
    key  <KP0> { [ KP_0,                    U2423,                   U211E,                   U2030,                   endash,                  KP_Insert,               U25A1,                   NoSymbol                 ] };
    key <KPDL> { [ period,                  KP_Separator,            comma,                   minutes,                 emdash,                  KP_Delete,               seconds,                 NoSymbol                 ] };
};