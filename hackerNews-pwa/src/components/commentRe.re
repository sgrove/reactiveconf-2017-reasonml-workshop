/* Reason component starting point */
let component = ReasonReact.statelessComponent "CommentRe";

let make _children => {
  ...component,
  render: fun _self => <div> <CommentItemRe _type="" id="" user="" timeAgo="" content="" /> </div>
};

let default = ReasonReact.wrapReasonForJs ::component (fun _jsProps => make [||]);
/* Original JS component: */
/* import React, { Component } from 'react';
   import CommentItem from './CommentItem';

   export default class Comment extends Component {
     constructor() {
       super();
       this.element = [];
     }

     renderChildren(data, type = 1) {
       if (data.comments) {
         data.comments.forEach((ele, key) => {
           this.element.push(
             <CommentItem
               user={ele.user}
               timeAgo={ele.time_ago}
               content={ele.content}
               key={ele.id}
               type={type}
               id={ele.id}
             />
           );
           this.renderChildren(ele, key + 2);
         });
       }
     }

     renderComponent(data) {
       this.element = [
         <CommentItem
           user={data.user}
           timeAgo={data.time_ago}
           content={data.content}
           key={data.id}
           id={data.id}
         />
       ];
       this.renderChildren(data);
       return this.element;
     }

     render() {
       return (
         <div>
           {this.renderComponent(this.props.data)}
         </div>
       );
     }
   }

   // <div dangerouslySetInnerHTML={{ __html: this.props.content }} />
    */
