//last updated: 22/12/2022 12:05

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
    key  <TAB> { [ Tab,                     ISO_Left_Tab,            Multi_key,               ISO_Level5_Lock,         NoSymbol,                NoSymbol,                NoSymbol,                ISO_Level5_Lock          ] };


    // Number row
    // --------------------------------------------------------------
    key <TLDE> { [ dead_circumflex,         dead_caron,              U21BB,                   U02DE,                   dead_abovedot,           Pointer_EnableKeys,      dead_belowdot,           NoSymbol                 ] };

    key <AE01> { [ 1,                       degree,                  U2055,                   U203B,                   ordfeminine,             NoSymbol,                notsign,                 NoSymbol                 ] };
    key <AE02> { [ 2,                       section,                 twosuperior,             twosubscript,            masculine,               NoSymbol,                logicalor,               NoSymbol                 ] };
    key <AE03> { [ 3,                       endash,                  threesuperior,           threesubscript,          U2212,                   NoSymbol,                logicaland,              NoSymbol                 ] };
    key <AE04> { [ 4,                       guillemotright,          U203A,                   femalesymbol,            U2058,                   NoSymbol,                U22A5,                   NoSymbol                 ] };
    key <AE05> { [ 5,                       guillemotleft,           U2039,                   malesymbol,              U2059,                   NoSymbol,                U2221,                   NoSymbol                 ] };
    key <AE06> { [ 6,                       emdash,                  U2104,                   U26A5,                   sterling,                NoSymbol,                U2225,                   NoSymbol                 ] };

    key <AE07> { [ 7,                       U2318,                   numerosign,              U03F0,                   currency,                NoSymbol,                U2135,                   NoSymbol                 ] };
    key <AE08> { [ 8,                       doublelowquotemark,      singlelowquotemark,      U27E8,                   Tab,                     ISO_Left_Tab,            U017F,                   NoSymbol                 ] };
    key <AE09> { [ 9,                       leftdoublequotemark,     leftsinglequotemark,     U27E9,                   KP_Divide,               KP_Divide,               U2610,                   NoSymbol                 ] };
    key <AE10> { [ 0,                       rightdoublequotemark,    rightsinglequotemark,    enfilledcircbullet,      KP_Multiply,             KP_Multiply,             emptyset,                NoSymbol                 ] };
    key <AE11> { [ U0D9E,                   notequal,                approxeq,                Greek_eta,               KP_Subtract,             KP_Subtract,             identical,               NoSymbol                 ] };
    key <AE12> { [ dead_grave,              dead_cedilla,            dead_stroke,             dead_dasia,              U2605,                   NoSymbol,                dead_macron,             NoSymbol                 ] };

    // Top row
    // --------------------------------------------------------------
    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AD01> { [ y,                       Y,                       division,                Greek_upsilon,           Prior,                   Prior,                   nabla,                   NoSymbol                 ] };
    key <AD02> { [ c,                       C,                       multiply,                Greek_chi,               BackSpace,               BackSpace,               U2102,                   NoSymbol                 ] };
    key <AD03> { [ l,                       L,                       U2113,                   Greek_lambda,            Up,                      Up,                      Greek_LAMBDA,            NoSymbol                 ] };
    key <AD04> { [ m,                       M,                       U2133,                   Greek_mu,                Delete,                  Delete,                  U204A,                   NoSymbol                 ] };
    key <AD05> { [ k,                       K,                       dead_diaeresis,          Greek_kappa,             Next,                    Next,                    U2235,                   NoSymbol                 ] };
   
    key <AD06> { [ z,                       Z,                       ellipsis,                Greek_zeta,              dead_doubleacute,        NoSymbol,                U2124,                   NoSymbol                 ] };
    key <AD07> { [ f,                       F,                       equal,                   Greek_phi,               KP_7,                    U2466,                   Greek_PHI,               NoSymbol                 ] };
    key <AD08> { [ u,                       U,                       plus,                    U205C,                   KP_8,                    U2467,                   includedin,              NoSymbol                 ] };
    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";
    key <AD09> { [ apostrophe,              quotedbl,                grave,                   U03F5,                   KP_9,                    U2468,                   intersection,            NoSymbol                 ] };
    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AD10> { [ x,                       X,                       asciitilde,              Greek_xi,                KP_Add,                  KP_Add,                  Greek_XI,                NoSymbol                 ] };
    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";
    key <AD11> { [ minus,                   underscore,              backslash,               Greek_finalsmallsigma,   U221E,                   NoSymbol,                jot,                     NoSymbol                 ] };
    key <AD12> { [ dead_acute,              dead_tilde,              bar,                     dead_psili,              variation,               NoSymbol,                dead_breve,              NoSymbol                 ] };

    // Middle row
    // --------------------------------------------------------------
    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AC01> { [ i,                       I,                       ampersand,               Greek_iota,              Home,                    Home,                    integral,                NoSymbol                 ] };
    key <AC02> { [ s,                       S,                       asterisk,                Greek_sigma,             Left,                    Left,                    Greek_SIGMA,             NoSymbol                 ] };
    key <AC03> { [ r,                       R,                       bracketleft,             Greek_rho,               Down,                    Down,                    U211D,                   NoSymbol                 ] };
    key <AC04> { [ t,                       T,                       bracketright,            Greek_tau,               Right,                   Right,                   partialderivative,       NoSymbol                 ] };
    key <AC05> { [ g,                       G,                       U210A,                   Greek_gamma,             End,                     End,                     Greek_GAMMA,             NoSymbol                 ] };

    key <AC06> { [ p,                       P,                       Greek_pi,                U205B,                   dead_abovering,          NoSymbol,                Greek_PI,                NoSymbol                 ] };
    key <AC07> { [ n,                       N,                       parenleft,               Greek_nu,                KP_4,                    U2463,                   U2115,                   NoSymbol                 ] };
    key <AC08> { [ e,                       E,                       parenright,              Greek_epsilon,           KP_5,                    U2464,                   uparrow,                 NoSymbol                 ] };
    key <AC09> { [ a,                       A,                       exclam,                  Greek_alpha,             KP_6,                    U2465,                   U2200,                   NoSymbol                 ] };
    key <AC10> { [ o,                       O,                       at,                      Greek_omicron,           KP_0,                    U24EA,                   elementof,               NoSymbol                 ] };
    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";
    key <AC11> { [ semicolon,               colon,                   numbersign,              U205D,                   U205A,                   KP_Decimal,              union,                   NoSymbol                 ] };

    // Bottom row
    // --------------------------------------------------------------
    key.type[Group1] = "EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK";
    key <AB01> { [ q,                       Q,                       U221C,                   U03D5,                   Escape,                  Escape,                  U211A,                   NoSymbol                 ] };
    key <AB02> { [ v,                       V,                       U221B,                   U205E,                   Tab,                     Tab,                     U2234,                   NoSymbol                 ] };
    key <AB03> { [ w,                       W,                       radical,                 Greek_omega,             Insert,                  Insert,                  Greek_OMEGA,             NoSymbol                 ] };
    key <AB04> { [ d,                       D,                       braceleft,               Greek_delta,             Return,                  Return,                  Greek_DELTA,             NoSymbol                 ] };
    key <AB05> { [ j,                       J,                       braceright,              Greek_theta,             Undo,                    Redo,                    Greek_THETA,             NoSymbol                 ] };

    key <AB06> { [ b,                       B,                       U300C,                   Greek_beta,              period,                  U2051,                   Greek_PSI,               NoSymbol                 ] };
    key <AB07> { [ h,                       H,                       U300D,                   Greek_psi,               KP_1,                    U2460,                   leftarrow,               NoSymbol                 ] };
    key.type[Group1] = "EIGHT_LEVEL_LEVEL_FIVE_LOCK";
    key <AB08> { [ comma,                   less,                    dollar,                  U03F1,                   KP_2,                    U2461,                   downarrow,               NoSymbol                 ] };
    key <AB09> { [ period,                  greater,                 percent,                 U03D1,                   KP_3,                    U2462,                   rightarrow,              NoSymbol                 ] };
    key <AB10> { [ slash,                   question,                asciicircum,             U2011,                   U2203,                   U204F,                   U21CC,                   NoSymbol                 ] };
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
    key  <KP5> { [ KP_5,                    U232C,                   U204A,                   U22B6,                   KP_Begin,                KP_Begin,                U22B7,                   NoSymbol                 ] };
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
    key  <KP0> { [ KP_0,                    U2423,                   percent,                 U2030,                   KP_Insert,               KP_Insert,               U25A1,                   NoSymbol                 ] };
    key <KPDL> { [ period,                  KP_Separator,            comma,                   minutes,                 KP_Delete,               KP_Delete,               seconds,                 NoSymbol                 ] };
};