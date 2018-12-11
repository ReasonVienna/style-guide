open Util;

let component = ReasonReact.statelessComponent(__MODULE__);

let make = (~color, ~text, _children) => {
  ...component,
  render: _self =>
    <div className={j|w-24 h-24 bg-$color flex items-center|j}>
      <div className="w-full text-center"> text->s </div>
    </div>,
};