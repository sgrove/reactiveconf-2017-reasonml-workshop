# ReactiveConf 2017 ReasonML Workshop
I'm looking forward to hacking with you on Reason in a few days! This document should get this set up and provide some guide on what we'll cover this Friday.

## **Must do before the workshop**
1. Join the #events channel in [Discord](https://discordapp.com/invite/reasonml) and ping @sgrove when you're there so I can check you off the list
1. Set up [Visual Studio Code (vscode)](https://code.visualstudio.com/download) with the excellent [ReasonML extension](https://github.com/reasonml-editor/vscode-reasonml#installation).
1. Git clone the hello-reactive reason project and confirm that vscode is working properly and you can recreate the screenshot below
1. Fill out the [pre-workshop survey](https://docs.google.com/forms/d/e/1FAIpQLSewNF0VAcHNo7S-FWkmR7UgVPy0coBsD-Q99OjAyd7Cj8QFmg/viewform)
1. Post any questions you might have, or upvote questions you're interested in on our [sli.do](https://app.sli.do/event/9uz4av5n/ask) (the event code is #J454, in case you need it)

## Goals
By the end of the workshop, we want you to be able to:

1. Read/write basic React components Reason
1. Call out to JavaScript from Reason
1. Add Reason code to existing client-side JavaScript apps (call Reason from JavaScript)
1. Reach out to through community channels to get effective help in a reasonable amount of time

In short, we want you to know enough to start building real things for existing projects, and to know how to get around any roadblocks that come up.

### Caveats
This is a four-hour workshop with forty people each, a handful of volunteers helping out, and a lot of material to cover. I know this is a busy time, but we *need* everyone to stay on top of their game and help us out. To that end, we have 5 *must do* pieces of homework before the workshop - and the sooner the better.

## Editor setup
Everyone should install [Visual Studio Code (vscode)](https://code.visualstudio.com/download) so we have a uniform experience. Once that's set up, please install the fantastic [ReasonML package](https://github.com/reasonml-editor/vscode-reasonml#installation). Ask in the discord (#editorsupport) and let us know that you're prepping for the workshop if you have *any* problems at all.

### Hello Reason editor test

We want to make sure that your editor and the Reason extension are both working well now:

    git clone git@github.com:sgrove/reactiveconf-2017-reasonml-workshop.git
    cd reactiveconf-2017-reasonml-workshop/hello-reactive
    npm install
    npm start
    npm run webpack # In another tab, since npm start is still running
    code src/simple/page.re # In *another* tab, open vscode from the hello-reactive dir

Now when you hover over `make` on line 17, everything should look like the editor screenshot below:
    
![VSCode with working ReasonML extension by Darin Morrison](/working_vs_code.png)

## Community links
1. Real-time community support in [Discord](https://discordapp.com/invite/reasonml)
1. OCaml/Reason learning forum [Discuss](https://discuss.ocaml.org/c/learning)
1. Q&A before and during the workshop, [sli.do](https://app.sli.do/event/9uz4av5n/ask)
