
/* ==== __break @ 004401dc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004401dc-004401dc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


