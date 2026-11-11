
/* ==== __break @ 00488c9d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00488c9d-00488c9d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


