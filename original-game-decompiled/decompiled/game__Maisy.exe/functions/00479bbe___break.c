
/* ==== __break @ 00479bbe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bbe-00479bbe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


