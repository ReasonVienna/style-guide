let component = ReasonReact.statelessComponent(__MODULE__);
[@genType]
let make = _children => {
  ...component,
  render: _self => {
    let keys = Tailwind.fonts->Js.Dict.keys;
    <div>
      {
        keys
        ->Belt.Array.map(key =>
            <div key className={j|font-$key text-lg|j}> key->Util.s </div>
          )
        ->ReasonReact.array
      }
    </div>;
  },
};