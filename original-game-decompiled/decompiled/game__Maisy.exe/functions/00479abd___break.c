
/* ==== __break @ 00479abd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479abd-00479abd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


