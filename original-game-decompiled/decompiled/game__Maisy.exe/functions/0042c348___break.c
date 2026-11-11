
/* ==== __break @ 0042c348 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042c348-0042c348
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


