
/* ==== __break @ 0044b283 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044b283-0044b283
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


