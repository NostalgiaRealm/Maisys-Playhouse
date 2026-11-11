
/* ==== __break @ 00410fda ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410fda-00410fda
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


