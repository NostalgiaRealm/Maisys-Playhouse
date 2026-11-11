
/* ==== __break @ 00410fdd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410fdd-00410fdd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


