open Util;

let component = ReasonReact.statelessComponent(__MODULE__);



let make = (~colors: array((string, string)), _children) => {
  ...component,
  render: _self =>
    colors
    ->Belt.Array.map(((key, value)) =>
        <div key className={j|w-1/5 h-24 bg-$key flex items-center|j}>
          <div className="w-full text-center"> value->s </div>
        </div>
      )
    ->ReasonReact.array,
};