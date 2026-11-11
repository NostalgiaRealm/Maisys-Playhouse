
/* ==== __break @ 00479bae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bae-00479bae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


