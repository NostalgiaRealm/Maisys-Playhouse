
/* ==== __break @ 00479d9f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479d9f-00479d9f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


