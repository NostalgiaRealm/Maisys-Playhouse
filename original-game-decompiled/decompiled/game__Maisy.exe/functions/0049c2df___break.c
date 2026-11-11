
/* ==== __break @ 0049c2df ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049c2df-0049c2df
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


