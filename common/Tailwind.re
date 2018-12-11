module Config = {
  [@bs.deriving abstract]
  type t = {
    colors: Js.Dict.t(string),
    fonts: Js.Dict.t(array(string)),
  };

  [@bs.module] external config: t = "../tailwind.js";
};

let colors = Config.(config->colorsGet);

let fonts = Config.(config->fontsGet);