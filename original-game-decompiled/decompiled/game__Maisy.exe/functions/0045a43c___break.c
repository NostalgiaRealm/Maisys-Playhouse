
/* ==== __break @ 0045a43c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a43c-0045a43c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


