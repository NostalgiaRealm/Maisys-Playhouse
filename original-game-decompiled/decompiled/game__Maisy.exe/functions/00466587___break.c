
/* ==== __break @ 00466587 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00466587-00466587
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


