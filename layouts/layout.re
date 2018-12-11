%raw
"require('../styles/main.css')";

open Util;

module Helmet = ReactHelmet.Helmet;
module Link = ReactRouterDom.Link;

let component = ReasonReact.statelessComponent("Layout");

let siteName = "Antwar Default";

[@genType]
type file = {
  title: string,
  description: string,
  keywords: array(string),
};

[@genType]
type location = ReactRouter.location;

[@genType]
let make = (~_location: location, ~file: file, children) => {
  ...component,
  render: _self => {
    let {title, description, keywords} = file;

    <div className="flex flex-col md:flex-row h-screen">
      <nav className="bg-sand-lighten-20 h-full py-16 w-1/5">
        <Meta siteName title description keywords />
        <ul
          className="font-montserrat leading-loose list-reset no-underline pl-8">
          <li> <Link to_="/"> {"Home" |> s} </Link> </li>
          <li> <Link to_="/about"> {"About" |> s} </Link> </li>
          <li>
            <Link to_=Routing.(href(Typography))> {"Typography" |> s} </Link>
          </li>
        </ul>
      </nav>
      <main className="w-1/2 font-overpass md:pl-12"> children </main>
    </div>;
  },
};