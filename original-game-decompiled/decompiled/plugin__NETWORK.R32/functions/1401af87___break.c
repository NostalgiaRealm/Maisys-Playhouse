
/* ==== __break @ 1401af87 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af87-1401af87
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


