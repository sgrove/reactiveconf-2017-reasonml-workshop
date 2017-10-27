external commentItem : ReasonReact.reactClass = "default" [@@bs.module "./CommentItem"];

let make ::_type ::id ::user ::timeAgo ::content children =>
  ReasonReact.wrapJsForReason
    reactClass::commentItem
    props::{"type": _type, "id": id, "user": user, "timeAgo": timeAgo, "content": content}
    children;
