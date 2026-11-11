
/* ==== __break @ 0042b587 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042b587-0042b587
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


