
/* ==== __break @ 004886cd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004886cd-004886cd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


