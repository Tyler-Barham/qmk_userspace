# Kyria's Default Keymap

![KLE render of the default Kyria keymap with QWERTY as the base layer. Layers are shown in sublegends.](https://i.ibb.co/RQZx2dY/default-kyria2.jpg)


The default keymap contains 5 layers which allows it to include all keys found on an ANSI layout TKL keyboard plus media keys.
Hardware features of the Kyria such as OLEDs, rotary encoders and underglow are also supported.

The five different layers are the following:
1. Base layer (QWERTY)
2. Navigation layer
3. Symbols/Numbers layer
4. Function layer

## Base layer(s)

```
Base Layer: QWERTY

,-------------------------------------------.                              ,-------------------------------------------.
|Ctrl/Esc|   Q  |   W  |   E  |   R  |   T  |                              |   Y  |   U  |   I  |   O  |   P  |  Bksp  |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|  Tab   |   A  |   S  |   D  |   F  |   G  |                              |   H  |   J  |   K  |   L  | ;  : |Ctrl/' "|
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
| LShift |   Z  |   X  |   C  |   V  |   B  | [ {  |CapsLk|  |F-keys|  ] } |   N  |   M  | ,  < | . >  | /  ? | RShift |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |Adjust| LGUI | LAlt/| Space| Nav  |  | Sym  | Space| AltGr| RGUI | Menu |
                       |      |      | Enter|      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```

## Navigation layer

```
Nav Layer: Media, navigation

,-------------------------------------------.                              ,-------------------------------------------.
|        |      |      |      |      |      |                              | PgUp | Home |   ↑  | End  | VolUp| Delete |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|        |  GUI |  Alt | Ctrl | Shift|      |                              | PgDn |  ←   |   ↓  |   →  | VolDn| Insert |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
|        |      |      |      |      |      |      |ScLck |  |      |      | Pause|M Prev|M Play|M Next|VolMut| PrtSc  |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```

This is where you'll find all the keys that are generally between the main block of a classic keyboard and the numpad in addition to media controls and modifiers on easy access on the home row for fast and comfortable chording with navigation keys.

Useful mnemonics:
- “GACS” to remember the order of the modifiers on the left-hand home row
- <kbd>Scroll Lock</kbd> is on the same key as <kbd>Caps Lock</kbd> because they're both locks
- <kbd>Delete</kbd> is on the same key as <kbd>Backspace</kbd> because they both erase characters
- <kbd>Home</kbd> is the leftmost position on the current line so it is above <kbd>←</kbd>. Same logic applies for <kbd>End</kbd>.
- <kbd>Media Previous</kbd> = ⏮, <kbd>Media Next</kbd> = ⏭
- <kbd>Page Up</kbd>, <kbd>Page Down</kbd> and <kbd>Volume Up</kbd>, <kbd>Volume Down</kbd> are positioned like the main <kbd>Up</kbd> and <kbd>Down</kbd> keys.

## Sym layer
```
Sym Layer: Numbers, symbols

,-------------------------------------------.                              ,-------------------------------------------.
|    `   |  1   |  2   |  3   |  4   |  5   |                              |   6  |  7   |  8   |  9   |  0   |   =    |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|    ~   |  !   |  @   |  #   |  $   |  %   |                              |   ^  |  &   |  *   |  (   |  )   |   +    |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
|    |   |   \  |  :   |  ;   |  -   |  [   |  {   |      |  |      |   }  |   ]  |  _   |  ,   |  .   |  /   |   ?    |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```
The top row is the unshifted num row, the home row of the layer is the shifted num row and the bottom row contains the hyphen `-` and the underscore `_` on the best lower row spot because of how frequent they are as well as redundant symbols that are already present on the base layer but are reproduced here to avoid juggling back and forth between base, shift, and sym when typing a string of symbols.

The layout of the first two rows needs no introduction, you're already used to them but it's worth looking into the structure of the bottom row.

The two halves are mirrored in a sense. On the right, you can find <kbd>,</kbd> <kbd>.</kbd> <kbd>/</kbd> at their usual spots with the addition of <kbd>Shift</kbd>+<kbd>/</kbd>=<kbd>?</kbd> to the right of the <kbd>/</kbd> key to remove the need to press simultaneously <kbd>Sym</kbd> and a <kbd>Shift</kbd> key to access `?`. 

Now, if you look at the left side, you'll notice that the mirror of <kbd>,</kbd> is <kbd>;</kbd>, the mirror of <kbd>.</kbd> is <kbd>:</kbd> and the mirror of <kbd>/</kbd> is <kbd>\\</kbd>. The same logic used for <kbd>Shift</kbd>+<kbd>/</kbd>=<kbd>?</kbd> also applies to <kbd>Shift</kbd>+<kbd>\\</kbd>=<kbd>|</kbd>.

In case you wish to combine <kbd>Shift</kbd> with a symbol key anyways, you can hold down <kbd>Shift</kbd> on the base layer with your pinky, activate <kbd>Sym</kbd> with your right thumb and while still holding down the <kbd>Shift</kbd> key, tap your desired symbol key. Same thing if you need <kbd>Ctrl</kbd>+<kbd>Digit</kbd>.

## Function layer
```
Function Layer: Function keys

,-------------------------------------------.                              ,-------------------------------------------.
|        |  F9  | F10  | F11  | F12  |      |                              |      |      |      |      |      |        |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|        |  F5  |  F6  |  F7  |  F8  |      |                              |      | Shift| Ctrl |  Alt |  GUI |        |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
|        |  F1  |  F2  |  F3  |  F4  |      |      |      |  |      |      |      |      |      |      |      |        |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```
In a similar fashion to the nav layer, pressing down `FKEYS` with the right thumb enables a numpad of function keys on the opposite hand and modifiers on the right-hand home row. Once again, mirror symmetry is leveraged in this keymap for the order of the right-hand modifiers.

The <kbd>Alt</kbd> modifier, despite being situated on the right half of the keyboard is *not* `KC_RALT`, it is `KC_LALT`. `KC_RALT` is actually the <kbd>AltGr</kbd> key which generally acts very differently to the left <kbd>Alt</kbd> key. Keyboard shortcuts involving <kbd>AltGr</kbd>+<kbd>F#</kbd> are rare and infrequent as opposed to the much more common <kbd>Alt</kbd>+<kbd>F#</kbd> shortcuts. Consequently, `KC_LALT` was chosen for the function layer.

Since there are more than 10 function keys, the cluster of F-keys does not follow the usual 3×3+1 numpad arrangement.

## Hardware Features
### OLEDs
The OLEDs display the current layer at the top of the active layers stack, the Kyria logo and lock status (caps lock, num lock, scroll lock).

## Going further…

This default keymap can be used as is, unchanged, as a daily driver for your Kyria but you're invited to treat your keymap like a bonsai. At the beginning, it's just like the default keymap but from time to time, you can tweak it a little. Cut a little key here, let another combo grow there. Slowly but surely it will be a unique keymap that will fit you like a glove.

Check out the #keymap-ideas channel on the official SplitKB Discord server for inspiration.
