
/* ==== __break @ 1401b879 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401b879-1401b879
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


