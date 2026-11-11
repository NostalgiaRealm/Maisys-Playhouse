
/* ==== __break @ 1401af98 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af98-1401af98
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


