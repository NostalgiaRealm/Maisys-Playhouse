
/* ==== __break @ 004695df ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695df-004695df
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


