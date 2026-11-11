
/* ==== __break @ 0040db16 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040db16-0040db16
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


