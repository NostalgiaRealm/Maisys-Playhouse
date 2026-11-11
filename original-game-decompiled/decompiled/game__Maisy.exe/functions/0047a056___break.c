
/* ==== __break @ 0047a056 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a056-0047a056
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


