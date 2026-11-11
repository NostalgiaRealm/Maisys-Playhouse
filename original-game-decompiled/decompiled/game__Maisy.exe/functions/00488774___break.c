
/* ==== __break @ 00488774 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00488774-00488774
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


