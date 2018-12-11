open Util;
let component = ReasonReact.statelessComponent(__MODULE__);

[@genType]
let make = _children => {
  ...component,
  render: _self => {
    let primaryColor =
      Tailwind.colors
      ->Js.Dict.get("primary")
      ->Belt.Option.getWithDefault("Unknown");
    <div className="flex flex-col">
      <h3 className="text-sm text-main-lighten-35 uppercase mb-5 mt-8">
        "Primary Colors"->s
      </h3>
      <ColorSquare color="primary" text=primaryColor />
      <ColorSection title="Primary color variations" prefixes=["primary-"] />
      <ColorSection title="Main Colors" prefixes=["main-"] />
      <ColorSection title="Accent Colors" prefixes=["dark-blue", "info-"] />
      <ColorSection title="Background Colors" prefixes=["sand"] />
    </div>;
  },
};