open Util;

let component = ReasonReact.statelessComponent(__MODULE__);

let make = (~title: string, ~prefixes: list(string), _children) => {
  ...component,
  render: _self =>
    <Section title>
      <ColorPalette
        colors={
          Tailwind.colors
          ->Js.Dict.entries
          ->Belt.Array.keep(((key, _value)) =>
              prefixes->Belt.List.some(prefix =>
                Js.String.startsWith(prefix, key)
              )
            )
        }
      />
    </Section>,
};