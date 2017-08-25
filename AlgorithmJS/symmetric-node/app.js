const root1 = document.getElementById('root1');
const root2 = document.getElementById('root2');

const node1 = document.getElementById('node1');
const node2 = document.getElementById('node2');

function getPathToRoot(root, node) {
  const path = [];

  while(node !== null && node !== root) {

    path.push(getIndex(node));
    node = node.parentNode;

  }

  function getIndex(node) {
    let index = 0;
    while(node.previousSibling) {
      index++;
      node = node.previousSibling;
    }
    return index;
  }

  return path;
}

function getNodeFollowPath(root, p) {
  const path = p.slice(0);
  let target = root;
  while(path.length) {
    let i = path.pop();
    target = target.childNodes[i];
  }
  return target;
}
const path1 = getPathToRoot(root1, node1);
const n2 = getNodeFollowPath(root2, path1);
console.log(n2 === node2);
