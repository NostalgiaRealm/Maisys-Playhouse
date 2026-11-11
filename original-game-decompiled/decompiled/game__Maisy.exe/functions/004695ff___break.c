
/* ==== __break @ 004695ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695ff-004695ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


