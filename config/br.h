#define BR_QUOT GRAVE         // ` -> '
#define BR_DQUO LS(BR_QUOT)   // ~ -> "
#define BR_DIAE LS(N6)        // ^ -> ¨ (dead)
#define BR_ACUT LEFT_BRACKET  // [ -> ´ (dead)
#define BR_GRV  LS(BR_ACUT)   // ` (dead)
#define BR_LBKT RIGHT_BRACKET // ] -> [
#define BR_LCBR LS(BR_LBKT)   // {
#define BR_RBKT BACKSLASH     // | -> ]
#define BR_RCBR LS(BR_RBRC)   // }
#define BR_CCED SEMICOLON     // ; -> Ç
#define BR_TILD SINGLE_QUOTE  // ' -> ~ (dead)
#define BR_CIRC LS(BR_TILD)   // ^ (dead)
#define BR_BSLS NUBS          // backslash
#define BR_PIPE LS(BR_BSLS)   // |
#define BR_SLSH INT1          // forward slash
#define BR_QUES LS(BR_SLSH)   // ?
#define BR_SCLN SLASH         // / -> ;
#define BR_COLN LS(BR_SCLN)   // ? -> :
