
/* ==== __break @ 00479bbb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bbb-00479bbb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


