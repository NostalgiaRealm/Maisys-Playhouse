
/* ==== __break @ 00479baa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479baa-00479baa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


