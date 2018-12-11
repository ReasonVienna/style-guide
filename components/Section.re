open Util;

let component = ReasonReact.statelessComponent(__MODULE__);
let make = (~title, children) => {
  ...component,
  render: _self =>
    <section className="my-8">
      <h3 className="text-sm text-main-lighten-35 uppercase mb-5">
        title->s
      </h3>
      <div> ...children </div>
    </section>,
};