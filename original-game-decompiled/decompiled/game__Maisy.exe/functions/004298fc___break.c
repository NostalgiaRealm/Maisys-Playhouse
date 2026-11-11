
/* ==== __break @ 004298fc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004298fc-004298fc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


