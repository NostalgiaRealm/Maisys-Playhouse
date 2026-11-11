
/* ==== __break @ 00410fef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410fef-00410fef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


